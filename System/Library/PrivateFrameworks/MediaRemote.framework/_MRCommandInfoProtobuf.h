/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR1* _preferredIntervals;
	SCD_Struct_MR8* _supportedInsertionPositions;
	SCD_Struct_MR8* _supportedPlaybackQueueTypes;
	SCD_Struct_MR8* _supportedQueueEndActions;
	SCD_Struct_MR20* _supportedRates;
	int _canScrub;
	int _command;
	NSMutableArray* _currentPlaybackSessionTypes;
	int _currentQueueEndAction;
	int _disabledReason;
	NSString* _localizedShortTitle;
	NSString* _localizedTitle;
	float _maximumRating;
	float _minimumRating;
	int _numAvailableSkips;
	NSString* _playbackSessionIdentifier;
	float _preferredPlaybackRate;
	int _presentationStyle;
	int _repeatMode;
	int _shuffleMode;
	int _skipFrequency;
	int _skipInterval;
	NSMutableArray* _supportedCustomQueueIdentifiers;
	NSMutableArray* _supportedPlaybackSessionIdentifiers;
	NSMutableArray* _supportedPlaybackSessionTypes;
	int _upNextItemCount;
	BOOL _active;
	BOOL _enabled;
	BOOL _supportsSharedQueue;
	SCD_Struct_MR21 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end
