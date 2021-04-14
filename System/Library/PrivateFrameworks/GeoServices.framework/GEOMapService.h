/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCacheDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class NSArray, NSCache;

@interface GEOMapService : NSObject {

	os_unfair_lock_s _preferredLanguagesLock;
	NSArray* _preferredLanguages;
	int _overriddenResultProviderID;
	int _additionalEnabledMarketsChangedToken;
	int _experimentsChangedToken;
	NSCache* _handleCache;
	id<NSCacheDelegate> _handleCacheDelegate;

}
+(id)sharedService;
+(void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)_preferredLanguages;
-(void)_localeChanged:(id)arg1 ;
-(id)defaultTraits;
-(id)ticketForTransitTripIdentifiers:(id)arg1 traits:(id)arg2 ;
-(int)localSearchProviderID;
-(id)ticketForTransitIdentifiers:(id)arg1 endDateForPlacecardSchedulesForThisBatch:(id)arg2 traits:(id)arg3 ;
-(id)_ticketForLegacyBatchReverseGeocodeLocations:(id)arg1 locationShifter:(/*^block*/id)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 placeTypeLimit:(int)arg5 traits:(id)arg6 ;
-(void)_countryCodeChanged:(id)arg1 ;
-(int)_loadOverriddenResultProviderID;
-(void)_sendInvalidateDataToSiriAndParSec;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
-(id)ticketForIdentifiers:(id)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodePostalAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6 ;
-(id)ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeLocation:(id)arg1 preserveOriginalLocation:(BOOL)arg2 placeTypeLimit:(int)arg3 traits:(id)arg4 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 placeTypeLimit:(int)arg5 traits:(id)arg6 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 locationShifter:(/*^block*/id)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 placeTypeLimit:(int)arg5 traits:(id)arg6 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6 ;
-(id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 completionItem:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 traits:(id)arg7 ;
-(id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 filters:(id)arg4 retainedSearch:(id)arg5 tappedQuerySuggestion:(id)arg6 sessionData:(id)arg7 ;
-(id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 maxResults:(unsigned)arg3 suppressResultsRequiringAttribution:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6 ;
-(void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(unsigned long long)arg3 coordinateOnlyRefinement:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_cachedMapItemForHandle:(id)arg1 enforceMaxAge:(BOOL)arg2 ;
-(id)_ticketForRefreshingHandle:(id)arg1 traits:(id)arg2 ;
-(void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)defaultBackgroundTraits;
-(id)ticketForMUIDs:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodePostalAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 shiftLocationsIfNeeded:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6 ;
-(id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeLocation:(id)arg1 placeTypeLimit:(int)arg2 traits:(id)arg3 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 coarseLocationUsed:(id)arg32 traits:(id)arg33 ;
-(id)ticketForAirportCode:(id)arg1 terminalCode:(id)arg2 gateCode:(id)arg3 traits:(id)arg4 ;
-(id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForSpatialLookupParameters:(id)arg1 traits:(id)arg2 ;
-(unsigned long long)maxParametersCountForSpatialPlaceLookup;
-(id)ticketForSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2 ;
-(unsigned long long)maxParametersCountForSpatialEventLookup;
-(id)ticketForSpatialEventLookupParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
-(id)ticketForFeedbackRequestData:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFeedbackRequest:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceLookupWithSearchCategory:(id)arg1 parentMuid:(unsigned long long)arg2 traits:(id)arg3 ;
-(id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)ticketForTransitScheduleAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForUpdatedTransitScheduleDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForTransitDeparturesAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 traits:(id)arg4 ;
-(id)ticketForTransitTripDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripID:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(GEOCoarseLocationLatLng*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(NSRange)arg3 traits:(id)arg4 ;
-(id)ticketForInterleavedInstantSearchFragment:(id)arg1 filters:(id)arg2 sessionData:(id)arg3 traits:(id)arg4 ;
-(id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 filters:(id)arg2 sessionData:(id)arg3 traits:(id)arg4 ;
-(id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 filters:(id)arg2 retainedSearch:(id)arg3 tappedQuerySuggestion:(id)arg4 sessionData:(id)arg5 traits:(id)arg6 ;
-(id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForSectionedInstantSearchFragment:(id)arg1 filters:(id)arg2 sessionData:(id)arg3 traits:(id)arg4 ;
-(id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 filters:(id)arg2 sessionData:(id)arg3 traits:(id)arg4 ;
-(id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 sessionData:(id)arg2 traits:(id)arg3 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(BOOL)arg2 ;
-(id)ticketForDFRCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketForTransitLines:(id)arg1 withTraits:(id)arg2 ;
-(id)ticketForNearestTransitStation:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 traits:(id)arg3 ;
-(id)ticketForDatasetCheckWithTraits:(id)arg1 ;
-(id)ticketforCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg1 originalWaypointRouteData:(id)arg2 zilchData:(id)arg3 sessionState:(id)arg4 routeId:(id)arg5 routeAttributes:(id)arg6 maxResults:(unsigned)arg7 traits:(id)arg8 ;
-(id)ticketForSearchQuery:(id)arg1 filters:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2 ;
-(id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForGeoIpLookupForIpAddr:(id)arg1 ;
-(id)ticketForTerritoryForLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForSearchHomeWithTraits:(id)arg1 ;
-(id)ticketForPublisherViewPublisherIdentifier:(id)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 batchSize:(unsigned)arg4 withTraits:(id)arg5 ;
-(id)ticketForCuratedCollections:(id)arg1 isBatchLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForCuratedCollectionItems:(id)arg1 collection:(id)arg2 traits:(id)arg3 ;
-(id)ticketForAllCollectionViewWithBatchSize:(unsigned)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 withTraits:(id)arg4 ;
-(void)trackSerializedPlaceData:(id)arg1 ;
-(void)trackMapItem:(id)arg1 ;
-(id)handleForMapItem:(id)arg1 ;
-(void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(BOOL)arg3 coordinateOnlyRefinement:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveMapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveMapItemFromHandle:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resolveMapItemLocallyFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)locallyResolvedMapItemFromHandle:(id)arg1 error:(id*)arg2 ;
-(void)_geoMapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_geoMapItemForData:(id)arg1 ;
-(id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2 ;
-(id)_geoMapItemsForPlacesInDetails:(id)arg1 ;
-(id)serializedClientMetadataForTraits:(id)arg1 ;
-(id)serializedClientMetadataForParsec;
-(id)serializedClientMetadataForSiri;
-(id)serializedETAFilterForSiriWithRouteAttributes:(id)arg1 ;
-(id)serializedSearchEvChargingParametersForSiriFromPorts:(id)arg1 ;
-(id)ticketForWiFiQualityNetworkServiceRequest:(id)arg1 ;
-(id)ticketForWiFiQualityLocationServiceRequest:(id)arg1 ;
-(id)ticketForWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 ;
-(double)wiFiQualitySearchRadiusMeters;
-(long long)wiFiQualitySearchZoomLevel;
-(double)wiFiQualitySmallSearchRadiusMeters;
@end

