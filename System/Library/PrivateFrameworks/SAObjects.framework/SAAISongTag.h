/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * albumAdamId; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * artistAdamId; 
@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (nonatomic,retain) SAUIImageResource * previewImage; 
@property (nonatomic,copy) NSURL * radioStationUri; 
@property (nonatomic,copy) NSString * title; 
+(id)songTag;
+(id)songTagWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(id)encodedClassName;
-(NSString *)albumAdamId;
-(void)setAlbumAdamId:(NSString *)arg1 ;
-(NSString *)artistAdamId;
-(void)setArtistAdamId:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(SAUIImageResource *)previewImage;
-(void)setPreviewImage:(SAUIImageResource *)arg1 ;
-(NSURL *)radioStationUri;
-(void)setRadioStationUri:(NSURL *)arg1 ;
@end

