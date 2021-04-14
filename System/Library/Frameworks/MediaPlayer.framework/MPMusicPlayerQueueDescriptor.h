/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding> {

	BOOL _private;
	long long _shuffleType;
	long long _repeatType;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	NSDictionary* _startTimes;
	NSDictionary* _endTimes;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (assign,nonatomic) long long shuffleType;                                //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,getter=isPrivate,nonatomic) BOOL private;                        //@synthesize private=_private - In the implementation block
@property (nonatomic,readonly) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * startTimes;                          //@synthesize startTimes=_startTimes - In the implementation block
@property (nonatomic,readonly) NSDictionary * endTimes;                            //@synthesize endTimes=_endTimes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isPrivate;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(long long)shuffleType;
-(long long)repeatType;
-(void)setShuffleType:(long long)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(void)_setStartTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(void)_setEndTime:(double)arg1 forIdentifiers:(id)arg2 ;
-(void)setPrivate:(BOOL)arg1 ;
-(NSDictionary *)startTimes;
-(NSDictionary *)endTimes;
@end

