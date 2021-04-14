/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedRoute, MNCommuteDestinationSuggestion, GEODirectionsRequest, MNLocation, GEOComposedETARoute, GEOETATrafficUpdateResponse, NSDictionary, MNObserverHashTable, NSString, GEOComposedWaypoint;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying> {

	GEOComposedRoute* _nonRecommendedRoute;
	BOOL _invalid;
	BOOL _rerouting;
	MNCommuteDestinationSuggestion* _suggestion;
	GEOComposedRoute* _route;
	GEODirectionsRequest* _directionsRequest;
	MNLocation* _lastMatchedLocation;
	GEOComposedETARoute* _etaRoute;
	GEOETATrafficUpdateResponse* _etaResponse;
	double _remainingTime;
	double _remainingDistance;
	MNLocation* _lastLocation;
	long long _score;
	NSDictionary* _scores;
	MNObserverHashTable* _observers;

}

@property (nonatomic,retain) GEOComposedRoute * nonRecommendedRoute; 
@property (nonatomic,retain) MNObserverHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL invalid;                                             //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) MNCommuteDestinationSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) GEOComposedWaypoint * waypoint; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain) GEOComposedRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEODirectionsRequest * directionsRequest;                 //@synthesize directionsRequest=_directionsRequest - In the implementation block
@property (nonatomic,retain) MNLocation * lastMatchedLocation;                         //@synthesize lastMatchedLocation=_lastMatchedLocation - In the implementation block
@property (readonly) BOOL canGetETARoute; 
@property (nonatomic,retain) GEOComposedETARoute * etaRoute;                           //@synthesize etaRoute=_etaRoute - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * etaResponse;                //@synthesize etaResponse=_etaResponse - In the implementation block
@property (readonly) BOOL canCalculateETA; 
@property (assign,nonatomic) double remainingTime;                                     //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) double remainingDistance;                                 //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (assign,nonatomic) BOOL rerouting;                                           //@synthesize rerouting=_rerouting - In the implementation block
@property (nonatomic,retain) MNLocation * lastLocation;                                //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) double geodesicDistance; 
@property (assign,nonatomic) long long score;                                          //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) NSDictionary * scores;                                      //@synthesize scores=_scores - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(long long)score;
-(NSString *)shortDescription;
-(void)setScore:(long long)arg1 ;
-(GEOComposedRoute *)route;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(void)setLastLocation:(MNLocation *)arg1 ;
-(GEOETATrafficUpdateResponse *)etaResponse;
-(void)setEtaResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(GEOComposedWaypoint *)waypoint;
-(GEODirectionsRequest *)directionsRequest;
-(void)setRemainingDistance:(double)arg1 ;
-(double)remainingDistance;
-(GEOComposedETARoute *)etaRoute;
-(MNLocation *)lastLocation;
-(MNObserverHashTable *)observers;
-(void)setObservers:(MNObserverHashTable *)arg1 ;
-(NSDictionary *)scores;
-(void)setScores:(NSDictionary *)arg1 ;
-(void)setSuggestion:(MNCommuteDestinationSuggestion *)arg1 ;
-(MNCommuteDestinationSuggestion *)suggestion;
-(MNLocation *)lastMatchedLocation;
-(void)setDirectionsRequest:(GEODirectionsRequest *)arg1 ;
-(void)setEtaRoute:(GEOComposedETARoute *)arg1 ;
-(double)geodesicDistance;
-(BOOL)invalid;
-(void)setInvalid:(BOOL)arg1 ;
-(void)setLastMatchedLocation:(MNLocation *)arg1 ;
-(BOOL)rerouting;
-(void)setRerouting:(BOOL)arg1 ;
-(GEOComposedRoute *)nonRecommendedRoute;
-(void)setNonRecommendedRoute:(GEOComposedRoute *)arg1 ;
-(BOOL)canGetETARoute;
-(BOOL)canCalculateETA;
-(void)updateFrom:(id)arg1 ;
@end

