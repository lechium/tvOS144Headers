/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEHmac : NSObject <DEWriter> {

	NSData* _hmac;
	SCD_Struct_DE2 _context;

}

@property (assign,nonatomic) SCD_Struct_DE2 context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * hmac;                       //@synthesize hmac=_hmac - In the implementation block
+(BOOL)verify:(id)arg1 computed:(id)arg2 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(SCD_Struct_DE2)context;
-(void)setContext:(SCD_Struct_DE2)arg1 ;
-(NSData *)hmac;
-(void)setHmac:(NSData *)arg1 ;
-(id)initWithKey:(id)arg1 iv:(id)arg2 ;
@end

