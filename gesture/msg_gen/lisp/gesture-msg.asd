
(cl:in-package :asdf)

(defsystem "gesture-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "gesture" :depends-on ("_package_gesture"))
    (:file "_package_gesture" :depends-on ("_package"))
    (:file "HandPos" :depends-on ("_package_HandPos"))
    (:file "_package_HandPos" :depends-on ("_package"))
  ))