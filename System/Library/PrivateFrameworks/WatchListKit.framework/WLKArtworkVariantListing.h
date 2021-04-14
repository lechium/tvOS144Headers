/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WatchListKit/WatchListKit-Structs.h>
@class NSArray;

@interface WLKArtworkVariantListing : NSObject {

	NSArray* _artworkVariants;

}

@property (nonatomic,copy,readonly) NSArray * artworkVariants;              //@synthesize artworkVariants=_artworkVariants - In the implementation block
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)bestArtworkVariantOfType:(long long)arg1 forSize:(CGSize)arg2 ;
-(id)bestArtworkVariantForSize:(CGSize)arg1 ;
-(id)artworkVariantOfType:(long long)arg1 ;
-(NSArray *)artworkVariants;
@end

