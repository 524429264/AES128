// Created by Noah
// http://noahmart.in

#import <Foundation/Foundation.h>

@interface NSData (AES128)

-(NSData*)AES128DecryptWithKey:(NSString*)key;

-(NSData*)AES128EncryptWithKey:(NSString*)key;


@end
