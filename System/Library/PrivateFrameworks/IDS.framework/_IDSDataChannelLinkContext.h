/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, NSData;

@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _networkType;
	long long _connectionType;
	unsigned _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned _remoteRATType;
	unsigned _maxBitrate;
	NSUUID* _linkUUID;
	NSUUID* _QRSessionID;
	long long _relayServerProvider;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	BOOL _serverIsDegraded;
	unsigned short _localLinkFlags;
	unsigned short _remoteLinkFlags;
	unsigned _localDataSoMask;
	unsigned _remoteDataSoMask;

}
-(id)description;
@end

