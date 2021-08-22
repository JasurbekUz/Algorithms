package fibonaci


func fiboNum (ord int) (fn int, mess string) {

  f1 := 0
  f2 := 1
  fn = f1 + f2
  mess = "- fibonachi number is: "

  if ord == 1 {

    fn = 0
  } else if ord == 0 {

    fn , mess = 404, "Not Found"
  }

  for i := 4; i <= ord; i++ {

    f1 = f2
    f2 = fn
    fn = f1 + f2
  }

  return fn, mess

}

