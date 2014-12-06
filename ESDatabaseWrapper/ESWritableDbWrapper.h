#import <Foundation/Foundation.h>

@protocol ESWritableDbWrapper <NSObject>

-(id)initWithPath:(NSString*)inPath_;
-(BOOL)open;
-(BOOL)close;
-(BOOL)isOpen;

-(void)enableDiagnostics;
-(NSError*)lastError;

-(BOOL)insert:( NSString* )sql_
        error:( NSError** )error_;

-(BOOL)update:( NSString* )sql_
        error:( NSError** )error_;

-(BOOL)sqlDelete:( NSString* )sql_
           error:( NSError** )error_;

-(BOOL)createTable:( NSString* )sql_
             error:( NSError** )error_;

-(BOOL)tableExists:( NSString* )tableName_;

@end
