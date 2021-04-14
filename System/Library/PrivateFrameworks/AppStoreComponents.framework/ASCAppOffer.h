/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/ASCOffer.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCAdamID, NSDictionary, NSNumber, NSArray, NSString, NSURL;

@interface ASCAppOffer : NSObject <ASCOffer, NSSecureCoding, NSCopying> {

	ASCAdamID* _id;
	NSDictionary* _titles;
	NSDictionary* _subtitles;
	long long _flags;
	NSNumber* _ageRating;
	NSArray* _metrics;
	NSString* _baseBuyParams;
	NSString* _metricsBuyParams;
	NSDictionary* _additionalHeaders;
	NSURL* _preflightPackageURL;
	NSString* _bundleID;
	NSString* _itemName;
	NSString* _vendorName;

}

@property (nonatomic,copy,readonly) NSString * baseBuyParams;                      //@synthesize baseBuyParams=_baseBuyParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * metricsBuyParams;                   //@synthesize metricsBuyParams=_metricsBuyParams - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalHeaders;              //@synthesize additionalHeaders=_additionalHeaders - In the implementation block
@property (nonatomic,copy,readonly) NSURL * preflightPackageURL;                   //@synthesize preflightPackageURL=_preflightPackageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemName;                           //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy,readonly) NSString * vendorName;                         //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,copy,readonly) ASCAdamID * id;                                //@synthesize id=_id - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * titles;                         //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * subtitles;                      //@synthesize subtitles=_subtitles - In the implementation block
@property (nonatomic,readonly) long long flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSNumber * ageRating;                               //@synthesize ageRating=_ageRating - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)vendorName;
-(NSArray *)metrics;
-(NSDictionary *)titles;
-(NSDictionary *)subtitles;
-(NSString *)itemName;
-(ASCAdamID *)id;
-(NSDictionary *)additionalHeaders;
-(NSURL *)preflightPackageURL;
-(NSNumber *)ageRating;
-(id)offerWithMetrics:(id)arg1 ;
-(id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13 ;
-(NSString *)baseBuyParams;
-(NSString *)metricsBuyParams;
@end

