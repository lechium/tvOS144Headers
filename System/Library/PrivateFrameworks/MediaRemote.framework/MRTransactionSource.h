/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MRTransactionSourceDelegate;
@class MRTransactionPacketizer, NSMutableArray, MRPlayerPath;

@interface MRTransactionSource : NSObject {

	unsigned long long _name;
	MRTransactionPacketizer* _packetizer;
	NSMutableArray* _packets;
	id<MRTransactionSourceDelegate> _delegate;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(unsigned long long)name;
-(void)_begin;
-(MRPlayerPath *)playerPath;
-(void)_processMessage:(id)arg1 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 packets:(id)arg3 delegate:(id)arg4 ;
@end

