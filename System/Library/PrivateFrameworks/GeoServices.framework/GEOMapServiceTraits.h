/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOAutomobileOptions, GEOCyclingOptions, GEOLocation, NSMutableArray, GEOMapRegion, GEOTransitOptions, GEOTraitsTransitScheduleFilter, GEOPDVenueIdentifier, GEOWalkingOptions;

@interface GEOMapServiceTraits : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _engineTypes;
	SCD_Struct_GE85* _knownClientResolvedTypes;
	SCD_Struct_GE85* _supportedAutocompleteListTypes;
	SCD_Struct_GE85* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE85* _supportedChildActions;
	SCD_Struct_GE85* _transportTypes;
	GEOSessionID _sessionId;
	NSString* _analyticsAppIdentifier;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	GEOAutomobileOptions* _automobileOptions;
	NSString* _carHeadunitManufacturer;
	NSString* _carHeadunitModel;
	double _carHeadunitPixelHeight;
	double _carHeadunitPixelWidth;
	GEOCyclingOptions* _cyclingOptions;
	GEOLocation* _deviceLocation;
	NSMutableArray* _deviceDisplayLanguages;
	NSString* _deviceKeyboardLocale;
	NSString* _deviceSpokenLocale;
	NSString* _displayRegion;
	NSMutableArray* _evChargingPorts;
	NSMutableArray* _historicalLocations;
	GEOMapRegion* _mapRegion;
	double _mapZoomLevel;
	NSMutableArray* _photoSizes;
	NSString* _providerID;
	NSMutableArray* _reviewUserPhotoSizes;
	double _sessionRelativeTimestamp;
	GEOTransitOptions* _transitOptions;
	GEOTraitsTransitScheduleFilter* _transitScheduleFilter;
	GEOTraitsTransitScheduleFilter* _transitTripStopTimeFilter;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _carHeadunitConnectionType;
	int _carHeadunitInteractionModel;
	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	unsigned _httpRequestPriority;
	int _mode;
	int _navigationTransportType;
	unsigned _photosCount;
	unsigned _ratingsCount;
	int _requestPurpose;
	unsigned _reviewUserPhotosCount;
	unsigned _sequenceNumber;
	int _source;
	unsigned _timeSinceMapEnteredForeground;
	unsigned _timeSinceMapViewportChanged;
	BOOL _appDarkMode;
	BOOL _autocompleteRequestSupportsSectionHeader;
	BOOL _deviceDarkMode;
	BOOL _deviceInVehicle;
	BOOL _isAPICall;
	BOOL _isRedoSearch;
	BOOL _isRefund;
	BOOL _isSettlement;
	BOOL _isWidgetRequest;
	BOOL _navigating;
	BOOL _supportAutocompleteRapAffordance;
	BOOL _supportChildItems;
	BOOL _supportClientRankingFeatureMetadata;
	BOOL _supportDirectionIntentAutocomplete;
	BOOL _supportDirectionIntentSearch;
	BOOL _supportDymSuggestion;
	BOOL _supportUnresolvedDirectionIntent;
	BOOL _supportsBrandFallback;
	BOOL _useBackgroundUrl;
	BOOL _wantsBrandIcon;
	struct {
		unsigned has_sessionId : 1;
		unsigned has_carHeadunitPixelHeight : 1;
		unsigned has_carHeadunitPixelWidth : 1;
		unsigned has_mapZoomLevel : 1;
		unsigned has_sessionRelativeTimestamp : 1;
		unsigned has_carHeadunitConnectionType : 1;
		unsigned has_carHeadunitInteractionModel : 1;
		unsigned has_deviceBatteryState : 1;
		unsigned has_deviceInterfaceOrientation : 1;
		unsigned has_httpRequestPriority : 1;
		unsigned has_mode : 1;
		unsigned has_navigationTransportType : 1;
		unsigned has_photosCount : 1;
		unsigned has_ratingsCount : 1;
		unsigned has_requestPurpose : 1;
		unsigned has_reviewUserPhotosCount : 1;
		unsigned has_sequenceNumber : 1;
		unsigned has_source : 1;
		unsigned has_timeSinceMapEnteredForeground : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
		unsigned has_appDarkMode : 1;
		unsigned has_autocompleteRequestSupportsSectionHeader : 1;
		unsigned has_deviceDarkMode : 1;
		unsigned has_deviceInVehicle : 1;
		unsigned has_isAPICall : 1;
		unsigned has_isRedoSearch : 1;
		unsigned has_isRefund : 1;
		unsigned has_isSettlement : 1;
		unsigned has_isWidgetRequest : 1;
		unsigned has_navigating : 1;
		unsigned has_supportAutocompleteRapAffordance : 1;
		unsigned has_supportChildItems : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentAutocomplete : 1;
		unsigned has_supportDirectionIntentSearch : 1;
		unsigned has_supportDymSuggestion : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned has_supportsBrandFallback : 1;
		unsigned has_useBackgroundUrl : 1;
		unsigned has_wantsBrandIcon : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_knownClientResolvedTypes : 1;
		unsigned read_supportedAutocompleteListTypes : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedChildActions : 1;
		unsigned read_transportTypes : 1;
		unsigned read_analyticsAppIdentifier : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_carHeadunitManufacturer : 1;
		unsigned read_carHeadunitModel : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_deviceLocation : 1;
		unsigned read_deviceDisplayLanguages : 1;
		unsigned read_deviceKeyboardLocale : 1;
		unsigned read_deviceSpokenLocale : 1;
		unsigned read_displayRegion : 1;
		unsigned read_evChargingPorts : 1;
		unsigned read_historicalLocations : 1;
		unsigned read_mapRegion : 1;
		unsigned read_photoSizes : 1;
		unsigned read_providerID : 1;
		unsigned read_reviewUserPhotoSizes : 1;
		unsigned read_transitOptions : 1;
		unsigned read_transitScheduleFilter : 1;
		unsigned read_transitTripStopTimeFilter : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (nonatomic,readonly) BOOL hasDeviceLocation; 
@property (nonatomic,retain) GEOLocation * deviceLocation; 
@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,retain) NSMutableArray * deviceDisplayLanguages; 
@property (nonatomic,readonly) BOOL hasDeviceKeyboardLocale; 
@property (nonatomic,retain) NSString * deviceKeyboardLocale; 
@property (nonatomic,readonly) BOOL hasDeviceSpokenLocale; 
@property (nonatomic,retain) NSString * deviceSpokenLocale; 
@property (assign,nonatomic) BOOL hasIsAPICall; 
@property (assign,nonatomic) BOOL isAPICall; 
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source; 
@property (nonatomic,retain) NSMutableArray * photoSizes; 
@property (assign,nonatomic) BOOL hasPhotosCount; 
@property (assign,nonatomic) unsigned photosCount; 
@property (nonatomic,retain) NSMutableArray * reviewUserPhotoSizes; 
@property (assign,nonatomic) BOOL hasReviewUserPhotosCount; 
@property (assign,nonatomic) unsigned reviewUserPhotosCount; 
@property (assign,nonatomic) BOOL hasTimeSinceMapEnteredForeground; 
@property (assign,nonatomic) unsigned timeSinceMapEnteredForeground; 
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) BOOL hasCarHeadunitInteractionModel; 
@property (assign,nonatomic) int carHeadunitInteractionModel; 
@property (nonatomic,readonly) BOOL hasCarHeadunitManufacturer; 
@property (nonatomic,retain) NSString * carHeadunitManufacturer; 
@property (nonatomic,readonly) BOOL hasCarHeadunitModel; 
@property (nonatomic,retain) NSString * carHeadunitModel; 
@property (assign,nonatomic) BOOL hasCarHeadunitPixelWidth; 
@property (assign,nonatomic) double carHeadunitPixelWidth; 
@property (assign,nonatomic) BOOL hasCarHeadunitPixelHeight; 
@property (assign,nonatomic) double carHeadunitPixelHeight; 
@property (nonatomic,readonly) BOOL hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitScheduleFilter; 
@property (assign,nonatomic) BOOL hasMapZoomLevel; 
@property (assign,nonatomic) double mapZoomLevel; 
@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,readonly) BOOL hasProviderID; 
@property (nonatomic,retain) NSString * providerID; 
@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation; 
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState; 
@property (assign,nonatomic) BOOL hasCarHeadunitConnectionType; 
@property (assign,nonatomic) int carHeadunitConnectionType; 
@property (assign,nonatomic) BOOL hasNavigating; 
@property (assign,nonatomic) BOOL navigating; 
@property (assign,nonatomic) BOOL hasIsRedoSearch; 
@property (assign,nonatomic) BOOL isRedoSearch; 
@property (nonatomic,retain) NSMutableArray * historicalLocations; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSearch; 
@property (assign,nonatomic) BOOL supportDirectionIntentSearch; 
@property (assign,nonatomic) BOOL hasSupportDymSuggestion; 
@property (assign,nonatomic) BOOL supportDymSuggestion; 
@property (nonatomic,readonly) unsigned long long knownClientResolvedTypesCount; 
@property (nonatomic,readonly) int* knownClientResolvedTypes; 
@property (assign,nonatomic) BOOL hasWantsBrandIcon; 
@property (assign,nonatomic) BOOL wantsBrandIcon; 
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle; 
@property (assign,nonatomic) BOOL hasUseBackgroundUrl; 
@property (assign,nonatomic) BOOL useBackgroundUrl; 
@property (assign,nonatomic) BOOL hasHttpRequestPriority; 
@property (assign,nonatomic) unsigned httpRequestPriority; 
@property (nonatomic,readonly) BOOL hasAnalyticsAppIdentifier; 
@property (nonatomic,retain) NSString * analyticsAppIdentifier; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
@property (assign,nonatomic) BOOL hasSupportDirectionIntentAutocomplete; 
@property (assign,nonatomic) BOOL supportDirectionIntentAutocomplete; 
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL hasDeviceDarkMode; 
@property (assign,nonatomic) BOOL deviceDarkMode; 
@property (assign,nonatomic) BOOL hasAppDarkMode; 
@property (assign,nonatomic) BOOL appDarkMode; 
@property (assign,nonatomic) BOOL hasSupportsBrandFallback; 
@property (assign,nonatomic) BOOL supportsBrandFallback; 
@property (assign,nonatomic) BOOL hasRequestPurpose; 
@property (assign,nonatomic) int requestPurpose; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteListTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteListTypes; 
@property (assign,nonatomic) BOOL hasIsSettlement; 
@property (assign,nonatomic) BOOL isSettlement; 
@property (nonatomic,readonly) BOOL hasTransitTripStopTimeFilter; 
@property (nonatomic,retain) GEOTraitsTransitScheduleFilter * transitTripStopTimeFilter; 
@property (assign,nonatomic) BOOL hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL supportClientRankingFeatureMetadata; 
@property (nonatomic,readonly) unsigned long long supportedChildActionsCount; 
@property (nonatomic,readonly) int* supportedChildActions; 
@property (assign,nonatomic) BOOL hasSupportChildItems; 
@property (assign,nonatomic) BOOL supportChildItems; 
@property (assign,nonatomic) BOOL hasIsRefund; 
@property (assign,nonatomic) BOOL isRefund; 
@property (assign,nonatomic) BOOL hasAutocompleteRequestSupportsSectionHeader; 
@property (assign,nonatomic) BOOL autocompleteRequestSupportsSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (assign,nonatomic) BOOL hasSupportAutocompleteRapAffordance; 
@property (assign,nonatomic) BOOL supportAutocompleteRapAffordance; 
@property (assign,nonatomic) BOOL hasNavigationTransportType; 
@property (assign,nonatomic) int navigationTransportType; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (assign,nonatomic) BOOL hasRatingsCount; 
@property (assign,nonatomic) unsigned ratingsCount; 
@property (nonatomic,retain) NSMutableArray * evChargingPorts; 
@property (assign,nonatomic) BOOL hasIsWidgetRequest; 
@property (assign,nonatomic) BOOL isWidgetRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)deviceDisplayLanguageType;
+(Class)photoSizesType;
+(Class)reviewUserPhotoSizesType;
+(Class)historicalLocationsType;
+(Class)evChargingPortType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)mode;
-(unsigned)sequenceNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)clearLocations;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOMapRegion *)mapRegion;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasMapRegion;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)setSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVenueIdentifier;
-(BOOL)supportUnresolvedDirectionIntent;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(BOOL)supportClientRankingFeatureMetadata;
-(void)setHasSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(BOOL)hasSupportClientRankingFeatureMetadata;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)addEngineType:(int)arg1 ;
-(void)setIsWidgetRequest:(BOOL)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(BOOL)isWidgetRequest;
-(void)setHasIsWidgetRequest:(BOOL)arg1 ;
-(BOOL)hasIsWidgetRequest;
-(void)setSupportDymSuggestion:(BOOL)arg1 ;
-(void)setSupportDirectionIntentSearch:(BOOL)arg1 ;
-(BOOL)supportDymSuggestion;
-(void)setHasSupportDymSuggestion:(BOOL)arg1 ;
-(BOOL)hasSupportDymSuggestion;
-(BOOL)supportDirectionIntentSearch;
-(void)setHasSupportDirectionIntentSearch:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSearch;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(unsigned)timeSinceMapViewportChanged;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(GEOAutomobileOptions *)automobileOptions;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)hasCyclingOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(BOOL)useBackgroundUrl;
-(BOOL)hasUseBackgroundUrl;
-(GEOLocation *)deviceLocation;
-(void)setDeviceLocation:(GEOLocation *)arg1 ;
-(unsigned long long)transportTypesCount;
-(unsigned long long)deviceDisplayLanguagesCount;
-(NSMutableArray *)deviceDisplayLanguages;
-(BOOL)hasDeviceSpokenLocale;
-(NSString *)deviceSpokenLocale;
-(BOOL)hasIsAPICall;
-(BOOL)isAPICall;
-(BOOL)hasTimeSinceMapEnteredForeground;
-(unsigned)timeSinceMapEnteredForeground;
-(void)setTimeSinceMapEnteredForeground:(unsigned)arg1 ;
-(BOOL)hasMode;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(void)updateAnalyticsShortSession;
-(BOOL)hasNavigationTransportType;
-(int)navigationTransportType;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setDeviceDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)photoSizes;
-(void)addPhotoSizes:(id)arg1 ;
-(BOOL)hasPhotosCount;
-(void)setPhotosCount:(unsigned)arg1 ;
-(BOOL)hasRatingsCount;
-(void)setRatingsCount:(unsigned)arg1 ;
-(NSMutableArray *)reviewUserPhotoSizes;
-(void)addReviewUserPhotoSizes:(id)arg1 ;
-(BOOL)hasReviewUserPhotosCount;
-(void)setReviewUserPhotosCount:(unsigned)arg1 ;
-(BOOL)hasTransitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(GEOTraitsTransitScheduleFilter *)transitScheduleFilter;
-(void)setHttpRequestPriority:(unsigned)arg1 ;
-(void)setSupportsBrandFallback:(BOOL)arg1 ;
-(void)setUseBackgroundUrl:(BOOL)arg1 ;
-(void)setIsAPICall:(BOOL)arg1 ;
-(void)setWantsBrandIcon:(BOOL)arg1 ;
-(GEOTraitsTransitScheduleFilter *)transitTripStopTimeFilter;
-(void)setTransitTripStopTimeFilter:(GEOTraitsTransitScheduleFilter *)arg1 ;
-(BOOL)hasTransitTripStopTimeFilter;
-(void)addTransportType:(int)arg1 ;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(unsigned)photosCount;
-(void)setSupportChildItems:(BOOL)arg1 ;
-(void)addSupportedChildAction:(int)arg1 ;
-(unsigned long long)supportedChildActionsCount;
-(void)clearSupportedChildActions;
-(int)supportedChildActionAtIndex:(unsigned long long)arg1 ;
-(BOOL)supportChildItems;
-(void)setHasSupportChildItems:(BOOL)arg1 ;
-(BOOL)hasSupportChildItems;
-(int*)supportedChildActions;
-(void)setSupportedChildActions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedChildActionsAsString:(int)arg1 ;
-(int)StringAsSupportedChildActions:(id)arg1 ;
-(BOOL)hasHttpRequestPriority;
-(unsigned)httpRequestPriority;
-(int)requestPurpose;
-(BOOL)hasDeviceLocation;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(void)addKnownClientResolvedType:(int)arg1 ;
-(unsigned long long)knownClientResolvedTypesCount;
-(void)clearKnownClientResolvedTypes;
-(int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1 ;
-(void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1 ;
-(int*)knownClientResolvedTypes;
-(void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)knownClientResolvedTypesAsString:(int)arg1 ;
-(int)StringAsKnownClientResolvedTypes:(id)arg1 ;
-(unsigned)ratingsCount;
-(unsigned long long)photoSizesCount;
-(void)clearPhotoSizes;
-(NSString *)deviceKeyboardLocale;
-(NSString *)carHeadunitManufacturer;
-(NSString *)carHeadunitModel;
-(NSString *)providerID;
-(NSString *)analyticsAppIdentifier;
-(void)addDeviceDisplayLanguage:(id)arg1 ;
-(void)setDeviceKeyboardLocale:(NSString *)arg1 ;
-(void)setDeviceSpokenLocale:(NSString *)arg1 ;
-(void)setCarHeadunitInteractionModel:(int)arg1 ;
-(void)setCarHeadunitManufacturer:(NSString *)arg1 ;
-(void)setCarHeadunitModel:(NSString *)arg1 ;
-(void)setCarHeadunitPixelWidth:(double)arg1 ;
-(void)setCarHeadunitPixelHeight:(double)arg1 ;
-(void)setMapZoomLevel:(double)arg1 ;
-(void)setProviderID:(NSString *)arg1 ;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setCarHeadunitConnectionType:(int)arg1 ;
-(void)setNavigating:(BOOL)arg1 ;
-(void)setIsRedoSearch:(BOOL)arg1 ;
-(void)addHistoricalLocations:(id)arg1 ;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(void)setAnalyticsAppIdentifier:(NSString *)arg1 ;
-(void)setSupportDirectionIntentAutocomplete:(BOOL)arg1 ;
-(void)setDeviceDarkMode:(BOOL)arg1 ;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(void)setRequestPurpose:(int)arg1 ;
-(void)addSupportedAutocompleteListType:(int)arg1 ;
-(void)setIsSettlement:(BOOL)arg1 ;
-(void)setIsRefund:(BOOL)arg1 ;
-(void)setAutocompleteRequestSupportsSectionHeader:(BOOL)arg1 ;
-(void)setSupportAutocompleteRapAffordance:(BOOL)arg1 ;
-(void)setNavigationTransportType:(int)arg1 ;
-(void)addEvChargingPort:(id)arg1 ;
-(NSMutableArray *)historicalLocations;
-(void)clearDeviceDisplayLanguages;
-(id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1 ;
-(id)photoSizesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)reviewUserPhotoSizesCount;
-(void)clearReviewUserPhotoSizes;
-(id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)historicalLocationsCount;
-(void)clearHistoricalLocations;
-(id)historicalLocationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedAutocompleteListTypesCount;
-(void)clearSupportedAutocompleteListTypes;
-(int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)evChargingPortsCount;
-(void)clearEvChargingPorts;
-(id)evChargingPortAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDeviceKeyboardLocale;
-(void)setHasIsAPICall:(BOOL)arg1 ;
-(void)setPhotoSizes:(NSMutableArray *)arg1 ;
-(void)setHasPhotosCount:(BOOL)arg1 ;
-(void)setReviewUserPhotoSizes:(NSMutableArray *)arg1 ;
-(unsigned)reviewUserPhotosCount;
-(void)setHasReviewUserPhotosCount:(BOOL)arg1 ;
-(int)carHeadunitInteractionModel;
-(void)setHasCarHeadunitInteractionModel:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitInteractionModel;
-(id)carHeadunitInteractionModelAsString:(int)arg1 ;
-(int)StringAsCarHeadunitInteractionModel:(id)arg1 ;
-(BOOL)hasCarHeadunitManufacturer;
-(BOOL)hasCarHeadunitModel;
-(double)carHeadunitPixelWidth;
-(void)setHasCarHeadunitPixelWidth:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitPixelWidth;
-(double)carHeadunitPixelHeight;
-(void)setHasCarHeadunitPixelHeight:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitPixelHeight;
-(double)mapZoomLevel;
-(void)setHasMapZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMapZoomLevel;
-(void)setHasMode:(BOOL)arg1 ;
-(id)modeAsString:(int)arg1 ;
-(int)StringAsMode:(id)arg1 ;
-(BOOL)hasProviderID;
-(int)deviceInterfaceOrientation;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(int)deviceBatteryState;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(BOOL)hasDeviceBatteryState;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(int)carHeadunitConnectionType;
-(void)setHasCarHeadunitConnectionType:(BOOL)arg1 ;
-(BOOL)hasCarHeadunitConnectionType;
-(id)carHeadunitConnectionTypeAsString:(int)arg1 ;
-(int)StringAsCarHeadunitConnectionType:(id)arg1 ;
-(BOOL)navigating;
-(void)setHasNavigating:(BOOL)arg1 ;
-(BOOL)hasNavigating;
-(BOOL)isRedoSearch;
-(void)setHasIsRedoSearch:(BOOL)arg1 ;
-(BOOL)hasIsRedoSearch;
-(void)setHistoricalLocations:(NSMutableArray *)arg1 ;
-(BOOL)wantsBrandIcon;
-(void)setHasWantsBrandIcon:(BOOL)arg1 ;
-(BOOL)hasWantsBrandIcon;
-(BOOL)deviceInVehicle;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)hasDeviceInVehicle;
-(void)setHasUseBackgroundUrl:(BOOL)arg1 ;
-(void)setHasHttpRequestPriority:(BOOL)arg1 ;
-(BOOL)hasAnalyticsAppIdentifier;
-(BOOL)supportDirectionIntentAutocomplete;
-(void)setHasSupportDirectionIntentAutocomplete:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentAutocomplete;
-(BOOL)deviceDarkMode;
-(void)setHasDeviceDarkMode:(BOOL)arg1 ;
-(BOOL)hasDeviceDarkMode;
-(BOOL)appDarkMode;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(BOOL)hasAppDarkMode;
-(BOOL)supportsBrandFallback;
-(void)setHasSupportsBrandFallback:(BOOL)arg1 ;
-(BOOL)hasSupportsBrandFallback;
-(void)setHasRequestPurpose:(BOOL)arg1 ;
-(BOOL)hasRequestPurpose;
-(id)requestPurposeAsString:(int)arg1 ;
-(int)StringAsRequestPurpose:(id)arg1 ;
-(int*)supportedAutocompleteListTypes;
-(void)setSupportedAutocompleteListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedAutocompleteListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedAutocompleteListTypes:(id)arg1 ;
-(BOOL)isSettlement;
-(void)setHasIsSettlement:(BOOL)arg1 ;
-(BOOL)hasIsSettlement;
-(BOOL)isRefund;
-(void)setHasIsRefund:(BOOL)arg1 ;
-(BOOL)hasIsRefund;
-(BOOL)autocompleteRequestSupportsSectionHeader;
-(void)setHasAutocompleteRequestSupportsSectionHeader:(BOOL)arg1 ;
-(BOOL)hasAutocompleteRequestSupportsSectionHeader;
-(BOOL)supportAutocompleteRapAffordance;
-(void)setHasSupportAutocompleteRapAffordance:(BOOL)arg1 ;
-(BOOL)hasSupportAutocompleteRapAffordance;
-(void)setHasNavigationTransportType:(BOOL)arg1 ;
-(id)navigationTransportTypeAsString:(int)arg1 ;
-(int)StringAsNavigationTransportType:(id)arg1 ;
-(void)setHasRatingsCount:(BOOL)arg1 ;
-(NSMutableArray *)evChargingPorts;
-(void)setEvChargingPorts:(NSMutableArray *)arg1 ;
-(void)_internal_incrementSessionCounters;
-(id)copyByIncrementingSessionCounters;
-(void)clearSessionId;
@end
