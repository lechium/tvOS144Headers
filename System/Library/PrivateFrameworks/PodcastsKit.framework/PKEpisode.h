/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, PKEpisodeStoreId, PKShow;

@interface PKEpisode : NSObject <NSSecureCoding> {

	 title;
	 isExplicit;
	 duration;
	 storeId;
	 show;
	 guid;
	 uuid;
	 streamUrl;
	 episodeUuid;

}

@property (readonly,nonatomic) BOOL isInLibrary; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSDate * releaseDate; 
@property (readonly,nonatomic) BOOL isExplicit; 
@property (readonly,nonatomic) double duration; 
@property (readonly,nonatomic) PKEpisodeStoreId * storeId; 
@property (readonly,nonatomic) PKShow * show; 
@property (copy,nonatomic) NSString * guid; 
@property (copy,nonatomic) NSString * uuid; 
@property (readonly,nonatomic) NSString * streamUrl; 
@property (copy,nonatomic) NSString * episodeUuid; 
+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
+(long long)mediaTaskType;
+(id)contentFrom:(id)arg1 ;
+(id)itemFrom:(id)arg1 ;
+(void)fetchEpisodeFrom:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(NSString *)title;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(PKShow *)show;
-(NSDate *)releaseDate;
-(PKEpisodeStoreId *)storeId;
-(NSString *)streamUrl;
-(BOOL)isExplicit;
-(NSString *)episodeUuid;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(id)initFrom:(id)arg1 ;
-(BOOL)isInLibrary;
-(void)updateForDatabaseMatch;
-(id)initWithTitle:(id)arg1 releaseDate:(id)arg2 isExplicit:(BOOL)arg3 duration:(double)arg4 storeId:(id)arg5 show:(id)arg6 guid:(id)arg7 uuid:(id)arg8 streamUrl:(id)arg9 ;
-(id)lookupEpisode;
@end
