/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSDate, SALocalSearchCarRouteOptions, NSString, SALocalSearchMapItem, NSNumber, SALocalSearchMapItemList;

@interface SALocalSearchShowMapPoints : SADomainCommand

@property (nonatomic,copy) NSDate * arrivalDate; 
@property (nonatomic,retain) SALocalSearchCarRouteOptions * carRouteOptions; 
@property (assign,nonatomic) BOOL chainResultSet; 
@property (nonatomic,copy) NSDate * departureDate; 
@property (nonatomic,copy) NSString * directionsType; 
@property (nonatomic,retain) SALocalSearchMapItem * itemDestination; 
@property (nonatomic,retain) SALocalSearchMapItem * itemSource; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * preferredDirectionsMode; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (assign,nonatomic) BOOL searchAlongRoute; 
@property (nonatomic,retain) SALocalSearchMapItemList * searchItems; 
@property (assign,nonatomic) BOOL showDirections; 
@property (assign,nonatomic) BOOL showTraffic; 
@property (assign,nonatomic) BOOL suppressNavigation; 
+(id)showMapPoints;
+(id)showMapPointsWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocalSearchMapItemList *)searchItems;
-(void)setSearchItems:(SALocalSearchMapItemList *)arg1 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDate *)arrivalDate;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(void)setDirectionsType:(NSString *)arg1 ;
-(NSString *)directionsType;
-(NSDate *)departureDate;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchMapItem *)itemSource;
-(void)setItemSource:(SALocalSearchMapItem *)arg1 ;
-(BOOL)chainResultSet;
-(void)setChainResultSet:(BOOL)arg1 ;
-(NSNumber *)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(NSNumber *)arg1 ;
-(BOOL)searchAlongRoute;
-(void)setSearchAlongRoute:(BOOL)arg1 ;
-(SALocalSearchCarRouteOptions *)carRouteOptions;
-(void)setCarRouteOptions:(SALocalSearchCarRouteOptions *)arg1 ;
-(void)setDepartureDate:(NSDate *)arg1 ;
-(SALocalSearchMapItem *)itemDestination;
-(void)setItemDestination:(SALocalSearchMapItem *)arg1 ;
-(NSString *)preferredDirectionsMode;
-(void)setPreferredDirectionsMode:(NSString *)arg1 ;
-(BOOL)showDirections;
-(void)setShowDirections:(BOOL)arg1 ;
-(BOOL)showTraffic;
-(void)setShowTraffic:(BOOL)arg1 ;
-(BOOL)suppressNavigation;
-(void)setSuppressNavigation:(BOOL)arg1 ;
@end

