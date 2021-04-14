/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Weather/Weather-Structs.h>
@class NSMutableArray, NSMutableIndexSet, NSMutableDictionary, NSArray;

@interface WAAQIGradient : NSObject {

	NSMutableArray* _internalStops;
	NSMutableIndexSet* _locationStops;
	NSMutableDictionary* _colorsByLocation;
	NSRange _range;

}

@property (nonatomic,retain) NSMutableArray * internalStops;                        //@synthesize internalStops=_internalStops - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * locationStops;                   //@synthesize locationStops=_locationStops - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * colorsByLocation;              //@synthesize colorsByLocation=_colorsByLocation - In the implementation block
@property (nonatomic,readonly) NSRange range;                                       //@synthesize range=_range - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stops; 
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(NSArray *)stops;
-(void)addGradientStop:(id)arg1 ;
-(id)gradientStopForLocation:(unsigned long long)arg1 ;
-(NSMutableArray *)internalStops;
-(void)setInternalStops:(NSMutableArray *)arg1 ;
-(NSMutableIndexSet *)locationStops;
-(NSMutableDictionary *)colorsByLocation;
@end

