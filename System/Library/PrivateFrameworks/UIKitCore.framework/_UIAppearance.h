/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableArray, NSMapTable, _UIAppearanceCustomizableClassInfo;

@interface _UIAppearance : NSObject {

	NSArray* _containerList;
	NSMutableArray* _appearanceInvocations;
	NSMapTable* _invocationSources;
	_UIAppearanceCustomizableClassInfo* _customizableClassInfo;

}

@property (nonatomic,readonly) _UIAppearanceCustomizableClassInfo * _customizableClassInfo;              //@synthesize customizableClassInfo=_customizableClassInfo - In the implementation block
+(id)recursiveDescription;
+(BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2 ;
+(id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 ;
+(id)_windowsForSource:(id)arg1 ;
+(id)_recorderForSource:(id)arg1 ;
+(id)_rootAppearancesNode;
+(void)_removeInvocationsForSource:(id)arg1 ;
+(id)appearancesAtNode:(id)arg1 withObject:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(BOOL)arg4 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 ;
+(id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_currentAppearanceSource;
+(id)_pendingRecordInvocationsForSource:(id)arg1 ;
+(BOOL)_hasAnyCustomizations;
+(void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3 ;
+(void)_setCurrentAppearanceSource:(id)arg1 ;
+(void)_addWindow:(id)arg1 forSource:(id)arg2 ;
+(void)_removeWindow:(id)arg1 forSource:(id)arg2 ;
+(id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2 ;
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(id)_traitCollection;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_removeInvocationsForSource:(id)arg1 ;
-(SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1 ;
-(BOOL)_isRecordingInvocations;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
-(void)_handleSetterInvocation:(id)arg1 ;
-(void)_handleGetterInvocation:(id)arg1 ;
-(id)_appearanceInvocations;
-(_UIAppearanceCustomizableClassInfo *)_customizableClassInfo;
@end

