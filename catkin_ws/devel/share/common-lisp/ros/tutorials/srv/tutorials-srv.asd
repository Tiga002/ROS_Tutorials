
(cl:in-package :asdf)

(defsystem "tutorials-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "mySRV" :depends-on ("_package_mySRV"))
    (:file "_package_mySRV" :depends-on ("_package"))
  ))