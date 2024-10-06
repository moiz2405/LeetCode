class Solution {
    public String simplifyPath(String path) {
        Stack<String> stack = new Stack<>();
        // Split the input path by '/'
        String[] components = path.split("/");

        // Iterate over the components of the path
        for (String component : components) {
            if (component.equals("") || component.equals(".")) {
                // Skip empty components and current directory '.'
                continue;
            } else if (component.equals("..")) {
                // Go back to the parent directory (pop from stack)
                if (!stack.isEmpty()) {
                    stack.pop();
                }
            } else {
                // It's a valid directory name, push onto the stack
                stack.push(component);
            }
        }

        // Rebuild the simplified path
        StringBuilder simplifiedPath = new StringBuilder();
        for (String dir : stack) {
            simplifiedPath.append("/").append(dir);
        }

        // If the stack is empty, the path is the root directory
        return simplifiedPath.length() > 0 ? simplifiedPath.toString() : "/";
    
    }
}