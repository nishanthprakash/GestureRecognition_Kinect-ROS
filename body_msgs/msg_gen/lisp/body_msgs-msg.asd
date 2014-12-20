
(cl:in-package :asdf)

(defsystem "body_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "SkeletonJoint" :depends-on ("_package_SkeletonJoint"))
    (:file "_package_SkeletonJoint" :depends-on ("_package"))
    (:file "Skeletons" :depends-on ("_package_Skeletons"))
    (:file "_package_Skeletons" :depends-on ("_package"))
    (:file "Hand" :depends-on ("_package_Hand"))
    (:file "_package_Hand" :depends-on ("_package"))
    (:file "Hands" :depends-on ("_package_Hands"))
    (:file "_package_Hands" :depends-on ("_package"))
    (:file "Skeleton" :depends-on ("_package_Skeleton"))
    (:file "_package_Skeleton" :depends-on ("_package"))
  ))