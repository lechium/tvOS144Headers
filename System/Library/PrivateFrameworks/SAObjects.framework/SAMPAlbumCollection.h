/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)albumCollection;
+(id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(id)groupIdentifier;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setDescription:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
@end

