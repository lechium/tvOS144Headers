/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor {

	BOOL _folder;
	BOOL _deleted;
	NSString* _name;
	WFWorkflowIcon* _icon;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * systemIconName; 
@property (getter=isFolder,nonatomic,readonly) BOOL folder;                //@synthesize folder=_folder - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultName;
+(id)defaultIcon;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFWorkflowIcon *)icon;
-(BOOL)isDeleted;
-(BOOL)isFolder;
-(id)initWithIdentifier:(id)arg1 isFolder:(BOOL)arg2 name:(id)arg3 icon:(id)arg4 isDeleted:(BOOL)arg5 ;
-(NSString *)systemIconName;
@end

