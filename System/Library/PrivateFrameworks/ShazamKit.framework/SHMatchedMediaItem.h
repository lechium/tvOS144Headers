/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/SHMediaItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SHSyncedLyrics, NSString;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding> {

	SHSyncedLyrics* _syncedLyrics;

}

@property (nonatomic,readonly) long long matchScore; 
@property (nonatomic,readonly) SHSyncedLyrics * syncedLyrics;                    //@synthesize syncedLyrics=_syncedLyrics - In the implementation block
@property (nonatomic,readonly) float timeSkew; 
@property (nonatomic,readonly) float frequencySkew; 
@property (nonatomic,readonly) double offset; 
@property (nonatomic,copy,readonly) NSString * syncedLyricsSnippet; 
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offset;
-(long long)matchScore;
-(NSString *)syncedLyricsSnippet;
-(id)initWithMatchedMediaItemDictionary:(id)arg1 ;
-(id)initWithMatchedMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2 ;
-(id)updateSyncedLyricsInMediaItemDictionary:(id)arg1 syncedLyrics:(id)arg2 ;
-(SHSyncedLyrics *)syncedLyrics;
-(float)timeSkew;
-(float)frequencySkew;
@end

