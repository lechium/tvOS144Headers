/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface Endpoint : NSObject {

	unsigned char _requireAck;
	BOOL _requireEncyption;
	NSUUID* _clientUUID;

}

@property (assign) unsigned char requireAck;              //@synthesize requireAck=_requireAck - In the implementation block
@property (assign) BOOL requireEncyption;                 //@synthesize requireEncyption=_requireEncyption - In the implementation block
@property (retain) NSUUID * clientUUID;                   //@synthesize clientUUID=_clientUUID - In the implementation block
-(id)description;
-(NSUUID *)clientUUID;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(unsigned char)requireAck;
-(void)setRequireAck:(unsigned char)arg1 ;
-(BOOL)requireEncyption;
-(void)setRequireEncyption:(BOOL)arg1 ;
@end

