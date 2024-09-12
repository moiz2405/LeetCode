import static java.lang.Integer.MIN_VALUE;
import static java.lang.Math.max;
import static java.util.Comparator.comparingInt;

import java.util.Deque;
import java.util.LinkedList;
import java.util.stream.Stream;


class Solution {
    private static final int[] DUMMY_INTERVAL = {MIN_VALUE, MIN_VALUE};

    private final Deque<int[]> q;

    public Solution() {
        this.q = new LinkedList<>();
        this.q.add(DUMMY_INTERVAL);
    }

    public int[][] insert(int[][] intervals, int[] newInterval) {
        var itr = concatenate(intervals, newInterval).sorted(comparingInt(a -> a[0])).iterator();

        int[] ivt;

        while (itr.hasNext())
            if (overlaps(ivt = itr.next()))
                updateLastInterval(ivt);
            else
                append(ivt);

        return createOutput();
    }


    private boolean overlaps(int[] ivt) {
        return q.getLast()[1] >= ivt[0];
    }

    private int[][] createOutput() {
        return q.stream()
                .skip(1) // skipping the added DUMMY_INTERVAL
                .toArray(int[][]::new);
    }

    private void updateLastInterval(int[] ivt) {
        var prev = q.getLast();
        prev[1] = max(prev[1], ivt[1]);
    }

    private void append(int[] ivt) {
        q.add(ivt);
    }

    private static Stream<int[]> concatenate(int[][] intervals, int[] newInterval) {
        return Stream.concat(Stream.of(newInterval), Stream.of(intervals));
    }
}