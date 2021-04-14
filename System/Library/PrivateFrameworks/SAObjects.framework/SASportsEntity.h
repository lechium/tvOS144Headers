/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSURL, NSDictionary, SASportsLeague, NSString, SAUIAppPunchOut, NSArray;

@interface SASportsEntity : SADomainObject

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSDictionary * images; 
@property (nonatomic,copy) NSURL * largeImage; 
@property (nonatomic,copy) NSDictionary * largeImages; 
@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,copy) NSURL * listImage; 
@property (nonatomic,copy) NSDictionary * listImages; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSArray * themeImages; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)image;
-(void)setImage:(NSURL *)arg1 ;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(NSURL *)largeImage;
-(id)encodedClassName;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(void)setLargeImage:(NSURL *)arg1 ;
-(NSDictionary *)largeImages;
-(void)setLargeImages:(NSDictionary *)arg1 ;
-(SASportsLeague *)league;
-(void)setLeague:(SASportsLeague *)arg1 ;
-(NSURL *)listImage;
-(void)setListImage:(NSURL *)arg1 ;
-(NSDictionary *)listImages;
-(void)setListImages:(NSDictionary *)arg1 ;
-(SAUIAppPunchOut *)punchout;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
@end

