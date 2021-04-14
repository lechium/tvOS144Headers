/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:40 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MIPMultiverseIdentifier, MPMediaLibrary, MPMediaItem;

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding> {

	MIPMultiverseIdentifier* _multiverseIdentifier;

}

@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL isDownloadableStoreOffer; 
@property (nonatomic,readonly) BOOL isPurchasableStoreOffer; 
@property (nonatomic,readonly) long long preferredStoreOfferVariant; 
@property (nonatomic,readonly) MPMediaLibrary * mediaLibrary; 
@property (nonatomic,readonly) MPMediaItem * representativeItem; 
@property (nonatomic,readonly) MIPMultiverseIdentifier * multiverseIdentifier;              //@synthesize multiverseIdentifier=_multiverseIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentID; 
+(BOOL)supportsSecureCoding;
+(BOOL)canFilterByProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(BOOL)isDownloadable;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2 ;
-(MPMediaItem *)representativeItem;
-(id)genericModelObjectWithRequestedProperties:(id)arg1 ;
-(id)valuesForProperties:(id)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)invalidateCachedProperties;
-(id)cachedValueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(long long)preferredStoreOfferVariant;
-(id)buyOfferForVariant:(long long)arg1 ;
-(id)buyOffer;
-(id)completionOfferForVariant:(long long)arg1 ;
-(BOOL)isDownloadableStoreOffer;
-(BOOL)isPurchasableStoreOffer;
@end

