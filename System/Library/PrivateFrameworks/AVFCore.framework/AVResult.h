/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSError;

@interface AVResult : NSObject {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	long long _status;
	NSError* _error;

}

@property (getter=isFailed,readonly) BOOL failed; 
-(id)init;
-(void)dealloc;
-(BOOL)isFailed;
-(void)markAsFailedWithError:(id)arg1 ;
-(void)markAsCompleted;
-(void)getStatus:(long long*)arg1 error:(id*)arg2 ;
@end
