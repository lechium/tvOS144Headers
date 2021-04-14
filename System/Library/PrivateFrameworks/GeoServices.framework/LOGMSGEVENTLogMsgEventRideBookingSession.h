/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng, NSMutableArray, NSString;

@interface LOGMSGEVENTLogMsgEventRideBookingSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _destinationBlurred;
	double _distanceToPickupInMeters;
	double _durationOfSessionInSeconds;
	NSMutableArray* _errorMessages;
	NSMutableArray* _intentResponseFailures;
	GEOLatLng* _originBlurred;
	NSString* _rideAppId;
	NSString* _rideAppVersion;
	NSString* _rideBookingSessionId;
	NSString* _rideType;
	long long _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _endState;
	int _endView;
	unsigned _numberOfAvailableExtensions;
	int _statusIssue;
	BOOL _comparedRideOptions;
	BOOL _exploredOtherOptions;
	BOOL _installedApp;
	BOOL _movedPickupLocation;
	BOOL _paymentIsApplePay;
	BOOL _showedSurgePricingAlert;
	BOOL _switchedApp;
	BOOL _unavailable;
	struct {
		unsigned has_distanceToPickupInMeters : 1;
		unsigned has_durationOfSessionInSeconds : 1;
		unsigned has_timestamp : 1;
		unsigned has_endState : 1;
		unsigned has_endView : 1;
		unsigned has_numberOfAvailableExtensions : 1;
		unsigned has_statusIssue : 1;
		unsigned has_comparedRideOptions : 1;
		unsigned has_exploredOtherOptions : 1;
		unsigned has_installedApp : 1;
		unsigned has_movedPickupLocation : 1;
		unsigned has_paymentIsApplePay : 1;
		unsigned has_showedSurgePricingAlert : 1;
		unsigned has_switchedApp : 1;
		unsigned has_unavailable : 1;
		unsigned read_destinationBlurred : 1;
		unsigned read_errorMessages : 1;
		unsigned read_intentResponseFailures : 1;
		unsigned read_originBlurred : 1;
		unsigned read_rideAppId : 1;
		unsigned read_rideAppVersion : 1;
		unsigned read_rideBookingSessionId : 1;
		unsigned read_rideType : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasRideBookingSessionId; 
@property (nonatomic,retain) NSString * rideBookingSessionId; 
@property (assign,nonatomic) BOOL hasEndState; 
@property (assign,nonatomic) int endState; 
@property (assign,nonatomic) BOOL hasEndView; 
@property (assign,nonatomic) int endView; 
@property (nonatomic,readonly) BOOL hasRideAppId; 
@property (nonatomic,retain) NSString * rideAppId; 
@property (nonatomic,readonly) BOOL hasOriginBlurred; 
@property (nonatomic,retain) GEOLatLng * originBlurred; 
@property (nonatomic,readonly) BOOL hasDestinationBlurred; 
@property (nonatomic,retain) GEOLatLng * destinationBlurred; 
@property (assign,nonatomic) BOOL hasExploredOtherOptions; 
@property (assign,nonatomic) BOOL exploredOtherOptions; 
@property (nonatomic,readonly) BOOL hasRideType; 
@property (nonatomic,retain) NSString * rideType; 
@property (assign,nonatomic) BOOL hasDistanceToPickupInMeters; 
@property (assign,nonatomic) double distanceToPickupInMeters; 
@property (assign,nonatomic) BOOL hasPaymentIsApplePay; 
@property (assign,nonatomic) BOOL paymentIsApplePay; 
@property (assign,nonatomic) BOOL hasNumberOfAvailableExtensions; 
@property (assign,nonatomic) unsigned numberOfAvailableExtensions; 
@property (assign,nonatomic) BOOL hasSwitchedApp; 
@property (assign,nonatomic) BOOL switchedApp; 
@property (assign,nonatomic) BOOL hasShowedSurgePricingAlert; 
@property (assign,nonatomic) BOOL showedSurgePricingAlert; 
@property (assign,nonatomic) BOOL hasDurationOfSessionInSeconds; 
@property (assign,nonatomic) double durationOfSessionInSeconds; 
@property (assign,nonatomic) BOOL hasInstalledApp; 
@property (assign,nonatomic) BOOL installedApp; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp; 
@property (assign,nonatomic) BOOL hasUnavailable; 
@property (assign,nonatomic) BOOL unavailable; 
@property (assign,nonatomic) BOOL hasMovedPickupLocation; 
@property (assign,nonatomic) BOOL movedPickupLocation; 
@property (nonatomic,retain) NSMutableArray * errorMessages; 
@property (nonatomic,readonly) BOOL hasRideAppVersion; 
@property (nonatomic,retain) NSString * rideAppVersion; 
@property (assign,nonatomic) BOOL hasComparedRideOptions; 
@property (assign,nonatomic) BOOL comparedRideOptions; 
@property (assign,nonatomic) BOOL hasStatusIssue; 
@property (assign,nonatomic) int statusIssue; 
@property (nonatomic,retain) NSMutableArray * intentResponseFailures; 
+(BOOL)isValid:(id)arg1 ;
+(Class)errorMessageType;
+(Class)intentResponseFailureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setEndState:(int)arg1 ;
-(int)endState;
-(void)setHasEndState:(BOOL)arg1 ;
-(BOOL)hasEndState;
-(id)endStateAsString:(int)arg1 ;
-(int)StringAsEndState:(id)arg1 ;
-(NSMutableArray *)errorMessages;
-(void)setEndView:(int)arg1 ;
-(void)setDurationOfSessionInSeconds:(double)arg1 ;
-(void)addErrorMessage:(id)arg1 ;
-(unsigned long long)errorMessagesCount;
-(void)clearErrorMessages;
-(id)errorMessageAtIndex:(unsigned long long)arg1 ;
-(int)endView;
-(void)setHasEndView:(BOOL)arg1 ;
-(BOOL)hasEndView;
-(id)endViewAsString:(int)arg1 ;
-(int)StringAsEndView:(id)arg1 ;
-(double)durationOfSessionInSeconds;
-(void)setHasDurationOfSessionInSeconds:(BOOL)arg1 ;
-(BOOL)hasDurationOfSessionInSeconds;
-(void)setErrorMessages:(NSMutableArray *)arg1 ;
-(void)setRideBookingSessionId:(NSString *)arg1 ;
-(void)setStatusIssue:(int)arg1 ;
-(void)setRideAppId:(NSString *)arg1 ;
-(void)setRideAppVersion:(NSString *)arg1 ;
-(void)setOriginBlurred:(GEOLatLng *)arg1 ;
-(void)setDestinationBlurred:(GEOLatLng *)arg1 ;
-(void)setExploredOtherOptions:(BOOL)arg1 ;
-(void)setDistanceToPickupInMeters:(double)arg1 ;
-(void)setPaymentIsApplePay:(BOOL)arg1 ;
-(void)setNumberOfAvailableExtensions:(unsigned)arg1 ;
-(void)setSwitchedApp:(BOOL)arg1 ;
-(void)setComparedRideOptions:(BOOL)arg1 ;
-(void)setShowedSurgePricingAlert:(BOOL)arg1 ;
-(void)setInstalledApp:(BOOL)arg1 ;
-(void)setUnavailable:(BOOL)arg1 ;
-(void)setMovedPickupLocation:(BOOL)arg1 ;
-(NSMutableArray *)intentResponseFailures;
-(void)setIntentResponseFailures:(NSMutableArray *)arg1 ;
-(NSString *)rideAppId;
-(NSString *)rideAppVersion;
-(void)addIntentResponseFailure:(id)arg1 ;
-(unsigned long long)intentResponseFailuresCount;
-(void)clearIntentResponseFailures;
-(id)intentResponseFailureAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRideAppId;
-(BOOL)hasRideAppVersion;
-(int)statusIssue;
-(void)setHasStatusIssue:(BOOL)arg1 ;
-(BOOL)hasStatusIssue;
-(id)statusIssueAsString:(int)arg1 ;
-(int)StringAsStatusIssue:(id)arg1 ;
-(NSString *)rideBookingSessionId;
-(GEOLatLng *)originBlurred;
-(GEOLatLng *)destinationBlurred;
-(NSString *)rideType;
-(void)setRideType:(NSString *)arg1 ;
-(BOOL)hasRideBookingSessionId;
-(BOOL)hasOriginBlurred;
-(BOOL)hasDestinationBlurred;
-(BOOL)exploredOtherOptions;
-(void)setHasExploredOtherOptions:(BOOL)arg1 ;
-(BOOL)hasExploredOtherOptions;
-(BOOL)hasRideType;
-(double)distanceToPickupInMeters;
-(void)setHasDistanceToPickupInMeters:(BOOL)arg1 ;
-(BOOL)hasDistanceToPickupInMeters;
-(BOOL)paymentIsApplePay;
-(void)setHasPaymentIsApplePay:(BOOL)arg1 ;
-(BOOL)hasPaymentIsApplePay;
-(unsigned)numberOfAvailableExtensions;
-(void)setHasNumberOfAvailableExtensions:(BOOL)arg1 ;
-(BOOL)hasNumberOfAvailableExtensions;
-(BOOL)switchedApp;
-(void)setHasSwitchedApp:(BOOL)arg1 ;
-(BOOL)hasSwitchedApp;
-(BOOL)showedSurgePricingAlert;
-(void)setHasShowedSurgePricingAlert:(BOOL)arg1 ;
-(BOOL)hasShowedSurgePricingAlert;
-(BOOL)installedApp;
-(void)setHasInstalledApp:(BOOL)arg1 ;
-(BOOL)hasInstalledApp;
-(BOOL)unavailable;
-(void)setHasUnavailable:(BOOL)arg1 ;
-(BOOL)hasUnavailable;
-(BOOL)movedPickupLocation;
-(void)setHasMovedPickupLocation:(BOOL)arg1 ;
-(BOOL)hasMovedPickupLocation;
-(BOOL)comparedRideOptions;
-(void)setHasComparedRideOptions:(BOOL)arg1 ;
-(BOOL)hasComparedRideOptions;
@end

