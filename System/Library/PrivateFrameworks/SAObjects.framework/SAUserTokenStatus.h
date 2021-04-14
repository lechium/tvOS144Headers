/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSNumber, NSString;

@interface SAUserTokenStatus : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSNumber * errorCode; 
@property (nonatomic,copy) NSNumber * lastUpdateAttemptTime; 
@property (nonatomic,copy) NSNumber * shouldExcludeFromBackgroundRefresh; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)errorCode;
-(id)encodedClassName;
-(NSNumber *)lastUpdateAttemptTime;
-(void)setLastUpdateAttemptTime:(NSNumber *)arg1 ;
-(NSNumber *)shouldExcludeFromBackgroundRefresh;
-(void)setShouldExcludeFromBackgroundRefresh:(NSNumber *)arg1 ;
@end
