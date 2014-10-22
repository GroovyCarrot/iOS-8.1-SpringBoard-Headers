//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, UIView;

@interface SBSearchTableViewCell : UITableViewCell
{
    NSLayoutConstraint *_clippingConstraint;
    _Bool _addedConstantsConstraints;
    NSArray *_variableConstraints;
    _Bool _aboveSelectedCell;
    UIView *_background;
    UIView *_clippingContainer;
    UIView *_separatorView;
    double _leftSeparatorMargin;
}

+ (void)configureViewForDisplay:(id)arg1 viewType:(long long)arg2;
+ (id)attributedString:(id)arg1 withLineBreakMode:(long long)arg2 defaultParagraphStyle:(id)arg3;
+ (id)attributedStringForImage:(id)arg1 baselineOffset:(double)arg2;
+ (id)selectedTextColor;
+ (id)textColor;
+ (id)maskedSelectedBackgroundColor;
+ (id)unmaskedSelectedBackgroundColor;
+ (id)backgroundColor;
+ (id)lineColor;
+ (id)cellIdentifierForSection:(id)arg1 result:(id)arg2;
+ (id)tableViewCellClasses;
+ (void)registerClass:(Class)arg1;
+ (_Bool)supportsSection:(id)arg1 result:(id)arg2;
+ (_Bool)shouldDisplayImagesForDomain:(unsigned int)arg1;
+ (void)initialize;
@property double leftSeparatorMargin; // @synthesize leftSeparatorMargin=_leftSeparatorMargin;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIView *clippingContainer; // @synthesize clippingContainer=_clippingContainer;
@property(readonly, nonatomic) UIView *background; // @synthesize background=_background;
@property(nonatomic, getter=isAboveSelectedCell) _Bool aboveSelectedCell; // @synthesize aboveSelectedCell=_aboveSelectedCell;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateSelectedState;
- (void)prepareForReuse;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
@property(readonly, nonatomic) NSArray *constantConstraints;
@property(readonly, nonatomic) NSArray *variableConstraints;
- (void)updateConstraints;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) double verticalImageMargin;
@property(readonly, nonatomic) double rightMargin;
@property(readonly, nonatomic) double leftMargin;
- (void)clipToTopHeaderWithHeight:(double)arg1 inTableView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateBottomLine;
- (_Bool)aboveSelectedCell;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

