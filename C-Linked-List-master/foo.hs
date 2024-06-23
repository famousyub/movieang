import System.IO

main :: IO ()
main = do
  fileHandle <- openFile "df.txt" ReadMode
  contents <- hGetContents fileHandle
  putStrLn contents
  hClose fileHandle