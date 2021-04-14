/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRContentItemProtobuf, NSMutableArray, _MRPlaybackSessionRequestProtobuf, _MRNowPlayingPlayerPathProtobuf, NSString;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {

	double _playbackPosition;
	double _playbackRate;
	_MRContentItemProtobuf* _contentItem;
	int _endpointOptions;
	NSMutableArray* _events;
	_MRPlaybackSessionRequestProtobuf* _playbackSessionRequest;
	int _playbackState;
	int _playerOptions;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	NSString* _requestID;
	BOOL _allowFadeTransition;
	SCD_Struct_MR16 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

