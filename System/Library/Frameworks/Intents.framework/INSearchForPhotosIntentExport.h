/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INDateComponentsRange, CLPlacemark, NSString, NSArray;


@protocol INSearchForPhotosIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) CLPlacemark * locationCreated; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSArray * searchTerms; 
@property (assign,nonatomic) unsigned long long includedAttributes; 
@property (assign,nonatomic) unsigned long long excludedAttributes; 
@property (nonatomic,copy) NSArray * peopleInPhoto; 
@property (nonatomic,copy) NSArray * events; 
@property (nonatomic,readonly) long long eventsOperator; 
@property (nonatomic,copy) NSArray * places; 
@property (nonatomic,readonly) long long placesOperator; 
@property (nonatomic,copy) NSArray * activities; 
@property (nonatomic,readonly) long long activitiesOperator; 
@property (nonatomic,copy) NSArray * geographicalFeatures; 
@property (nonatomic,readonly) long long geographicalFeaturesOperator; 
@property (nonatomic,copy) NSString * memoryName; 
@required
-(id)init;
-(NSArray *)activities;
-(void)setEvents:(id)arg1;
-(void)setPlaces:(id)arg1;
-(NSArray *)places;
-(void)setActivities:(id)arg1;
-(NSArray *)events;
-(NSString *)albumName;
-(void)setAlbumName:(id)arg1;
-(CLPlacemark *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(NSArray *)searchTerms;
-(void)setSearchTerms:(id)arg1;
-(unsigned long long)includedAttributes;
-(void)setIncludedAttributes:(unsigned long long)arg1;
-(unsigned long long)excludedAttributes;
-(void)setExcludedAttributes:(unsigned long long)arg1;
-(NSArray *)peopleInPhoto;
-(void)setPeopleInPhoto:(id)arg1;
-(NSArray *)geographicalFeatures;
-(void)setGeographicalFeatures:(id)arg1;
-(NSString *)memoryName;
-(void)setMemoryName:(id)arg1;
-(long long)eventsOperator;
-(long long)placesOperator;
-(long long)activitiesOperator;
-(long long)geographicalFeaturesOperator;

@end
