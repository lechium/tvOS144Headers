/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVServices/TVTopShelfAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVTopShelfCustomAction : TVTopShelfAction <NSSecureCoding> {

	BOOL _showsActivityIndicatorWhilePerforming;

}

@property (assign,nonatomic) BOOL showsActivityIndicatorWhilePerforming;              //@synthesize showsActivityIndicatorWhilePerforming=_showsActivityIndicatorWhilePerforming - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)showsActivityIndicatorWhilePerforming;
-(void)setShowsActivityIndicatorWhilePerforming:(BOOL)arg1 ;
@end

