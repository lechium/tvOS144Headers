/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (nonatomic,copy,readonly) NSArray * calls;                     //@synthesize calls=_calls - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,copy,readonly) NSString * displayName; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(int)status;
-(NSString *)displayName;
-(NSArray *)calls;
-(id)initWithCalls:(id)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(BOOL)isEqualToCallGroup:(id)arg1 ;
@end

