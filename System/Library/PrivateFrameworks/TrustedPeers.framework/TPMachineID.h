/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface TPMachineID : NSObject {

	NSString* _machineID;
	unsigned long long _status;
	NSDate* _modified;

}

@property (readonly) NSString * machineID;                   //@synthesize machineID=_machineID - In the implementation block
@property (readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (readonly) NSDate * modified;                      //@synthesize modified=_modified - In the implementation block
-(id)description;
-(unsigned long long)status;
-(NSString *)machineID;
-(NSDate *)modified;
-(id)initWithMachineID:(id)arg1 status:(unsigned long long)arg2 modified:(id)arg3 ;
@end
