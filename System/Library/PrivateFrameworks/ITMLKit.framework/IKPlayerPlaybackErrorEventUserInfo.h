/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSError, NSDictionary, NSString;

@interface IKPlayerPlaybackErrorEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldStopDueToError;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldStopDueToError;              //@synthesize shouldStopDueToError=_shouldStopDueToError - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(NSDictionary *)properties;
-(id)initWithError:(id)arg1 shouldStopDueToError:(BOOL)arg2 ;
-(BOOL)shouldStopDueToError;
@end

