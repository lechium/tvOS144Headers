/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSConsolidatedDialog : NSObject <SSXPCCoding, NSCopying> {

	NSString* _cancelLabel;
	NSString* _reason;
	NSString* _title;

}

@property (copy) NSString * cancelLabel;                            //@synthesize cancelLabel=_cancelLabel - In the implementation block
@property (copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)cancelLabel;
-(void)setCancelLabel:(NSString *)arg1 ;
@end

