/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class ENNoteRef;

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) ENNoteRef * noteRef; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)contentCategories;
+(id)outputTypes;
+(void)createNoteWithContent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)itemWithNoteRef:(id)arg1 note:(id)arg2 ;
-(id)name;
-(id)preferredFileType;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(ENNoteRef *)noteRef;
-(BOOL)canEncodeWithCoder:(id)arg1 ;
@end
