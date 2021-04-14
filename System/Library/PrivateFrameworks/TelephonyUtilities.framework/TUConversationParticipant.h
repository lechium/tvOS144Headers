/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TUHandle, NSString;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding> {

	BOOL _muted;
	BOOL _audioEnabled;
	BOOL _videoEnabled;
	BOOL _momentsAvailable;
	unsigned long long _identifier;
	TUHandle* _handle;
	long long _streamToken;
	long long _audioPriority;
	long long _videoPriority;
	NSString* _avcIdentifier;
	NSString* _activeIDSDestination;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;                                    //@synthesize muted=_muted - In the implementation block
@property (assign,getter=isAudioEnabled,nonatomic) BOOL audioEnabled;                      //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,getter=isVideoEnabled,nonatomic) BOOL videoEnabled;                      //@synthesize videoEnabled=_videoEnabled - In the implementation block
@property (assign,getter=isMomentsAvailable,nonatomic) BOOL momentsAvailable;              //@synthesize momentsAvailable=_momentsAvailable - In the implementation block
@property (assign,nonatomic) long long streamToken;                                        //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) long long audioPriority;                                      //@synthesize audioPriority=_audioPriority - In the implementation block
@property (assign,nonatomic) long long videoPriority;                                      //@synthesize videoPriority=_videoPriority - In the implementation block
@property (nonatomic,copy) NSString * avcIdentifier;                                       //@synthesize avcIdentifier=_avcIdentifier - In the implementation block
@property (nonatomic,copy) NSString * activeIDSDestination;                                //@synthesize activeIDSDestination=_activeIDSDestination - In the implementation block
@property (nonatomic,readonly) unsigned long long identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TUHandle * handle;                                     //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(TUHandle *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(BOOL)isEqualToParticipant:(id)arg1 ;
-(long long)streamToken;
-(BOOL)isVideoEnabled;
-(BOOL)isMomentsAvailable;
-(NSString *)avcIdentifier;
-(NSString *)activeIDSDestination;
-(id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 ;
-(void)setVideoEnabled:(BOOL)arg1 ;
-(void)setMomentsAvailable:(BOOL)arg1 ;
-(void)setStreamToken:(long long)arg1 ;
-(long long)audioPriority;
-(void)setAudioPriority:(long long)arg1 ;
-(long long)videoPriority;
-(void)setVideoPriority:(long long)arg1 ;
-(void)setAvcIdentifier:(NSString *)arg1 ;
-(void)setActiveIDSDestination:(NSString *)arg1 ;
@end

