/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@class NSArray, NSString;

@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {

	unsigned long long _fails;
	NSArray* _subfeatures;

}

@property (nonatomic,readonly) unsigned long long touchedEdges; 
@property (nonatomic,readonly) NSArray * subfeatures;                        //@synthesize subfeatures=_subfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDictionary;
-(NSArray *)subfeatures;
-(id)initWithSubfeatures:(id)arg1 ;
-(unsigned long long)touchedEdges;
-(void)featureDidChangeState:(id)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
@end

