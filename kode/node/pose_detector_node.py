import mediapipe as mp
from rclpy.node import Node

...


class PoseDetector(Node):

    def __init__(self, **kwargs):
        super().__init__(...)

        self.image_subscription = ...
        self.pose = mp.solutions.pose.Pose(...)

        ...

    def image_callback(self, msg):
        image = ...
        results = self.pose.process(image)

        ...
