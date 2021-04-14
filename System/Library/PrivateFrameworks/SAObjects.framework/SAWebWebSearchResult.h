/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * imageResults; 
@property (nonatomic,copy) NSArray * newsResults; 
@property (nonatomic,copy) NSArray * relatedSearchResults; 
@property (nonatomic,copy) NSNumber * totalImageResults; 
@property (nonatomic,copy) NSNumber * totalNewsResults; 
@property (nonatomic,copy) NSNumber * totalVideoResults; 
@property (nonatomic,copy) NSNumber * totalWebResults; 
@property (nonatomic,copy) NSArray * videoResults; 
@property (nonatomic,copy) NSArray * webResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webSearchResult;
+(id)webSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)imageResults;
-(void)setImageResults:(NSArray *)arg1 ;
-(NSArray *)newsResults;
-(void)setNewsResults:(NSArray *)arg1 ;
-(NSArray *)relatedSearchResults;
-(void)setRelatedSearchResults:(NSArray *)arg1 ;
-(NSNumber *)totalImageResults;
-(void)setTotalImageResults:(NSNumber *)arg1 ;
-(NSNumber *)totalNewsResults;
-(void)setTotalNewsResults:(NSNumber *)arg1 ;
-(NSNumber *)totalVideoResults;
-(void)setTotalVideoResults:(NSNumber *)arg1 ;
-(NSNumber *)totalWebResults;
-(void)setTotalWebResults:(NSNumber *)arg1 ;
-(NSArray *)videoResults;
-(void)setVideoResults:(NSArray *)arg1 ;
-(NSArray *)webResults;
-(void)setWebResults:(NSArray *)arg1 ;
@end

