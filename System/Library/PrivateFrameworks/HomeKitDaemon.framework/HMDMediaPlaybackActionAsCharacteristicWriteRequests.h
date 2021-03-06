/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDMediaPlaybackAction, NSArray;

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject {

	HMDMediaPlaybackAction* _residualAction;
	NSArray* _characteristicWriteRequests;

}

@property (readonly) HMDMediaPlaybackAction * residualAction;              //@synthesize residualAction=_residualAction - In the implementation block
@property (readonly) NSArray * characteristicWriteRequests;                //@synthesize characteristicWriteRequests=_characteristicWriteRequests - In the implementation block
-(id)init;
-(NSArray *)characteristicWriteRequests;
-(HMDMediaPlaybackAction *)residualAction;
-(id)initWithAction:(id)arg1 characteristicWriteRequests:(id)arg2 ;
@end

