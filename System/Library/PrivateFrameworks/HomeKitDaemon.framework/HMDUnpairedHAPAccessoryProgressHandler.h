/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject {

	NSUUID* _accessoryUUID;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSUUID * accessoryUUID;              //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,copy) id progressHandler;                    //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(NSUUID *)accessoryUUID;
-(void)setAccessoryUUID:(NSUUID *)arg1 ;
-(id)initWithAccessoryUUID:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

