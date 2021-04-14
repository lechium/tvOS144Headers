/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class RBSProcessHandle, RBSProcessExitContext, NSString;

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding> {

	RBSProcessHandle* _process;
	RBSProcessExitContext* _context;

}

@property (nonatomic,retain) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) RBSProcessExitContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(RBSProcessExitContext *)context;
-(void)setContext:(RBSProcessExitContext *)arg1 ;
-(RBSProcessHandle *)process;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

