/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class RETaggedFeatureValueArray;

@interface RERelevanceValue : NSObject <NSCopying, REAutomaticExportedInterface> {

	unsigned long long _hash;
	BOOL _historic;
	RETaggedFeatureValueArray* _values;

}

@property (nonatomic,readonly) RETaggedFeatureValueArray * values;              //@synthesize values=_values - In the implementation block
@property (getter=isHistoric,nonatomic,readonly) BOOL historic;                 //@synthesize historic=_historic - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(RETaggedFeatureValueArray *)values;
-(BOOL)isHistoric;
-(id)initWithValues:(id)arg1 isHistoric:(BOOL)arg2 ;
@end

