/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSDictionary;

@interface AMSMediaArtwork : NSObject {

	NSDictionary* _artworkDictionary;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize; 
-(id)initWithDictionary:(id)arg1 ;
-(double)width;
-(double)height;
-(id)URLString;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(id)URLWithSize:(CGSize)arg1 ;
-(NSDictionary *)artworkDictionary;
-(CGSize)artworkSize;
-(CGColorRef)colorWithKind:(id)arg1 ;
-(unsigned long long)_qualityForFormat:(id)arg1 ;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 quality:(unsigned long long)arg4 ;
@end

