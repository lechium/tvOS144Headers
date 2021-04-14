/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class EDAMNotebook, EDAMLinkedNotebook, EDAMSharedNotebook, NSString;

@interface ENNotebook : NSObject <NSCoding> {

	BOOL _isShared;
	BOOL _isDefaultNotebookOverride;
	EDAMNotebook* _notebook;
	EDAMLinkedNotebook* _linkedNotebook;
	EDAMSharedNotebook* _sharedNotebook;

}

@property (nonatomic,retain) EDAMNotebook * notebook;                          //@synthesize notebook=_notebook - In the implementation block
@property (nonatomic,retain) EDAMLinkedNotebook * linkedNotebook;              //@synthesize linkedNotebook=_linkedNotebook - In the implementation block
@property (nonatomic,retain) EDAMSharedNotebook * sharedNotebook;              //@synthesize sharedNotebook=_sharedNotebook - In the implementation block
@property (assign,nonatomic) BOOL isShared;                                    //@synthesize isShared=_isShared - In the implementation block
@property (assign,nonatomic) BOOL isDefaultNotebookOverride;                   //@synthesize isDefaultNotebookOverride=_isDefaultNotebookOverride - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * ownerDisplayName; 
@property (nonatomic,readonly) BOOL allowsWriting; 
@property (nonatomic,readonly) BOOL isOwnShared; 
@property (nonatomic,readonly) BOOL isJoinedShared; 
@property (nonatomic,readonly) BOOL isPublic; 
@property (nonatomic,readonly) BOOL isOwnPublic; 
@property (nonatomic,readonly) BOOL isJoinedPublic; 
@property (nonatomic,readonly) BOOL isBusinessNotebook; 
@property (nonatomic,readonly) BOOL isOwnedByUser; 
@property (nonatomic,readonly) BOOL isDefaultNotebook; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)guid;
-(BOOL)isShared;
-(BOOL)isLinked;
-(NSString *)ownerDisplayName;
-(void)setIsShared:(BOOL)arg1 ;
-(EDAMLinkedNotebook *)linkedNotebook;
-(void)setLinkedNotebook:(EDAMLinkedNotebook *)arg1 ;
-(id)initWithNotebook:(id)arg1 ;
-(id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 ;
-(id)initWithPublicNotebook:(id)arg1 forLinkedNotebook:(id)arg2 ;
-(id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 withBusinessNotebook:(id)arg3 ;
-(id)initWithNotebook:(id)arg1 linkedNotebook:(id)arg2 sharedNotebook:(id)arg3 ;
-(BOOL)isOwnShared;
-(BOOL)isJoinedShared;
-(BOOL)isPublic;
-(BOOL)isJoinedPublic;
-(BOOL)isOwnPublic;
-(BOOL)isBusinessNotebook;
-(BOOL)isOwnedByUser;
-(BOOL)isDefaultNotebook;
-(BOOL)allowsWriting;
-(EDAMNotebook *)notebook;
-(void)setNotebook:(EDAMNotebook *)arg1 ;
-(EDAMSharedNotebook *)sharedNotebook;
-(void)setSharedNotebook:(EDAMSharedNotebook *)arg1 ;
-(BOOL)isDefaultNotebookOverride;
-(void)setIsDefaultNotebookOverride:(BOOL)arg1 ;
@end

