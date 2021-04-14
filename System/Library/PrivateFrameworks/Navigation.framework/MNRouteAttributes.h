/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <GeoServices/GEORouteAttributes.h>
#import <libobjc.A.dylib/VGVirtualGarageObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSObject, NSError, NSString;

@interface MNRouteAttributes : GEORouteAttributes <VGVirtualGarageObserver, NSSecureCoding, NSCopying> {

	NSArray* _latLngs;
	BOOL _forceUpdate;
	BOOL _hasOpenedVirtualGarageConnection;
	BOOL _hasResolvedVehicle;
	NSObject* _vehicle;
	NSError* _vgError;
	NSObject* _garage;
	BOOL _hasResolvedRules;
	NSArray* _lprRules;
	NSError* _lprError;

}

@property (assign,nonatomic) BOOL hasResolvedVehicle; 
@property (assign,nonatomic) BOOL hasResolvedRules;                 //@synthesize hasResolvedRules=_hasResolvedRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)_loadLPRRulesForWaypoints:(id)arg1 forceUpdate:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)buildRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)buildRouteAttributesForETAUpdateRequest:(id)arg1 queue:(id)arg2 result:(/*^block*/id)arg3 ;
-(id)initWithAttributes:(id)arg1 waypoints:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 latLngs:(id)arg2 ;
-(void)_populateRouteAttributes:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setHasResolvedVehicle:(BOOL)arg1 ;
-(BOOL)hasResolvedVehicle;
-(void)_loadRulesIfNecessary:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_resolveSelectedVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHasResolvedRules:(BOOL)arg1 ;
-(void)virtualGarageDidUpdate:(id)arg1 ;
-(BOOL)hasResolvedRules;
@end

