/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _UIStatusBarStateStackInfo : NSObject {

	int _hostPID;
	long long _statusBarOrientationWithoutHost;
	double _statusBarHeightWithoutHost;

}

@property (assign) long long statusBarOrientationWithoutHost;              //@synthesize statusBarOrientationWithoutHost=_statusBarOrientationWithoutHost - In the implementation block
@property (assign) double statusBarHeightWithoutHost;                      //@synthesize statusBarHeightWithoutHost=_statusBarHeightWithoutHost - In the implementation block
@property (assign) int hostPID;                                            //@synthesize hostPID=_hostPID - In the implementation block
-(int)hostPID;
-(void)setHostPID:(int)arg1 ;
-(long long)statusBarOrientationWithoutHost;
-(void)setStatusBarOrientationWithoutHost:(long long)arg1 ;
-(double)statusBarHeightWithoutHost;
-(void)setStatusBarHeightWithoutHost:(double)arg1 ;
@end
