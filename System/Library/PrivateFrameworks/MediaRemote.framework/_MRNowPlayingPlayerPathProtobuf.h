/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRNowPlayingClientProtobuf, _MROriginProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying> {

	_MRNowPlayingClientProtobuf* _client;
	_MROriginProtobuf* _origin;
	_MRNowPlayingPlayerProtobuf* _player;

}

@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) _MROriginProtobuf * origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasClient; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayer; 
@property (nonatomic,retain) _MRNowPlayingPlayerProtobuf * player;              //@synthesize player=_player - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(_MRNowPlayingClientProtobuf *)client;
-(id)dictionaryRepresentation;
-(void)setClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasClient;
-(_MRNowPlayingPlayerProtobuf *)player;
-(void)setPlayer:(_MRNowPlayingPlayerProtobuf *)arg1 ;
-(_MROriginProtobuf *)origin;
-(void)setOrigin:(_MROriginProtobuf *)arg1 ;
-(BOOL)hasOrigin;
-(BOOL)hasPlayer;
@end

